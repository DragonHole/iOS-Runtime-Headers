/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapOverlayRenderer.h>

@protocol PXPlacesMapPipelineComponentProvider, PXPlacesGeotaggedItemDataSource;
@class NSString;

@interface PXPlacesMapDotsRenderer : NSObject <PXPlacesMapOverlayRenderer> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
	id<PXPlacesGeotaggedItemDataSource> _dataSource;

}

@property (__weak) id<PXPlacesGeotaggedItemDataSource> dataSource;                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) UIEdgeInsets minimumEdgeInsets; 
-(UIEdgeInsets)minimumEdgeInsets;
-(long long)annotationType;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)rendererForOverlay:(id)arg1 andMapView:(id)arg2 ;
-(id)overlayForLayoutItem:(id)arg1 ;
-(void)reset;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(void)setDataSource:(id<PXPlacesGeotaggedItemDataSource>)arg1 ;
@end

