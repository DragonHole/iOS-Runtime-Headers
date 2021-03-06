/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInputClue.h>

@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {

	CLSPlace* _place;

}
+(id)cluesWithLocations:(id)arg1 ;
+(id)clueWithLocation:(id)arg1 ;
-(void)setPlace:(id)arg1 ;
-(id)place;
-(id)projectedLocation;
-(id)placemark;
-(BOOL)isDefinite;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(id)regionInPlacemark;
-(CLLocationCoordinate2D)closestCoordinates;
-(id)description;
-(id)region;
-(id)location;
@end

