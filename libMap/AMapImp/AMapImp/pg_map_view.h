/*
 *------------------------------------------------------------------
 *  pandora/feature/map/pg_map_view.h
 *  Description:
 *      地图视图头文件定义
 *  DCloud Confidential Proprietary
 *  Copyright (c) Department of Research and Development/Beijing/DCloud.
 *  All Rights Reserved.
 *
 *  Changelog:
 *	number	author	modify date  modify record
 *   0       xty     2012-12-10  创建文件
 *------------------------------------------------------------------
 */

#import <Foundation/Foundation.h>
#import <MAMapKit/MAMapKit.h>
#import <AMapFoundationKit/AMapFoundationKit.h>
#import "PDRNView.h"
#import "PGMapView.h"

@class PGMap;
@class PGMapMarker;
@class PGGISOverlay;
@class PGMapOverlay;

@interface PGAMapKey : NSObject
+(NSString*)verify;
@end

@interface PGMAMapView : PGMapView <MAMapViewDelegate,PGMapViewDelegte>
{
    MAMapView *_mapView;
    NSMutableArray *_markersDict;
    NSMutableArray *_overlaysDict;
    NSMutableArray *_gisOverlaysDict;
    NSMutableArray *_jsCallbackDict;
    //BMKLocationService *_localService;
}

//自定义标记管理
- (void)addMarker:(PGMapMarker*)marker;
- (void)removeMarker:(PGMapMarker*)marker;

- (void)addGISOverlay:(PGGISOverlay*)overlay;
- (void)removeGISOverlay:(PGGISOverlay*)overlay;

- (void)addMapOverlay:(PGMapOverlay*)overlay;
- (void)setMapOverlay:(PGMapOverlay*)overlay isVisable:(BOOL)visable;
- (void)removeMapOverlay:(PGMapOverlay*)overlay;
- (MAOverlayRenderer *)viewForOverlay:(PGMapOverlay*)overlay;

- (void)removeAllOverlay;
//- (BMKAnnotationView *)mapView:(BMKMapView *)mapView viewForAnnotation:(id <BMKAnnotation>)annotation;
@end

