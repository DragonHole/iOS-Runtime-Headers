/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater> {

	Queue _queue;
	MapsSuggestionsObservers* _locationObservers;
	MapsSuggestionsObservers* _visitObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(void)dealloc;
-(BOOL)hasObservers;
-(NSString *)uniqueName;
-(id)startLocationUpdatesForDelegate:(id)arg1 ;
-(void)stopLocationUpdatesForDelegate:(id)arg1 ;
-(id)restartLocationUpdatesForDelegate:(id)arg1 ;
-(void)startImplemention;
-(void)stopImplementation;
-(void)condsiderNewLocation:(id)arg1 ;
-(void)condsiderNewVisit:(id)arg1 ;
-(void)awaitSync;
-(unsigned long long)countLocationObservers;
@end

