/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/MKOverlay.h>
#import <libobjc.A.dylib/PXPlacesMapRenderable.h>

@protocol PXPlacesMapSelectionHandler, PXPlacesMapRenderer;
@class NSOrderedSet, NSString;

@interface PXPlacesMapDotsOverlay : NSObject <MKOverlay, PXPlacesMapRenderable> {

	NSOrderedSet* geotaggables;
	long long index;
	id<PXPlacesMapSelectionHandler> selectionHandler;
	id<PXPlacesMapRenderer> _renderer;
	CLLocationCoordinate2D _coordinate;
	SCD_Struct_PX4 _boundingMapRect;

}

@property (__weak) id<PXPlacesMapRenderer> renderer;                              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX4 boundingMapRect;                    //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
-(CLLocationCoordinate2D)coordinate;
-(SCD_Struct_PX4)boundingMapRect;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(void)setSelectionHandler:(id<PXPlacesMapSelectionHandler>)arg1 ;
-(id<PXPlacesMapRenderer>)renderer;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(NSOrderedSet *)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 boundingMapRect:(SCD_Struct_PX4)arg2 renderer:(id)arg3 ;
-(void)setRenderer:(id<PXPlacesMapRenderer>)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
@end

