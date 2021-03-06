/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLocation, NSArray;

@interface RTRouteFinderViterbiStep : NSObject {

	RTLocation* _waypoint;
	NSArray* _items;

}

@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) RTLocation * waypoint;              //@synthesize waypoint=_waypoint - In the implementation block
@property (nonatomic,retain) NSArray * items;                  //@synthesize items=_items - In the implementation block
-(RTLocation *)waypoint;
-(void)setWaypoint:(RTLocation *)arg1 ;
-(id)initWithRoad:(id)arg1 ;
-(id)initWithWaypoint:(id)arg1 ;
-(id)init;
-(BOOL)valid;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

