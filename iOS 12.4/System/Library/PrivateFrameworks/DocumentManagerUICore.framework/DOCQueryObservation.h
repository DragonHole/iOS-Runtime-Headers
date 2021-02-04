/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DOCItemQueryObserver.h>

@class NSFileProviderEnumerationProperties, DOCSpotlightCollection, NSString;

@interface DOCQueryObservation : NSObject <DOCItemQueryObserver> {

	NSFileProviderEnumerationProperties* _properties;
	DOCSpotlightCollection* _collection;
	unsigned long long _maximumNumberOfItems;

}

@property (retain) NSFileProviderEnumerationProperties * properties;               //@synthesize properties=_properties - In the implementation block
@property (__weak) DOCSpotlightCollection * collection;                            //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItems;              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DOCSpotlightCollection *)collection;
-(void)setCollection:(DOCSpotlightCollection *)arg1 ;
-(id)itemPredicateForCollector:(id)arg1 ;
-(id)initWithProperties:(id)arg1 collection:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 ;
-(void)collector:(id)arg1 didGatherItems:(id)arg2 ;
-(unsigned long long)maximumNumberOfItemsForCollector:(id)arg1 ;
-(BOOL)collector:(id)arg1 itemIsSufficient:(id)arg2 ;
-(void)collector:(id)arg1 didUpdateItemOrigin:(unsigned long long)arg2 ;
-(BOOL)collector:(id)arg1 canRemoveItemIDs:(id)arg2 ;
-(void)collector:(id)arg1 didRemoveItemIDs:(id)arg2 ;
-(void)collector:(id)arg1 didUpdateItems:(id)arg2 ;
-(void)collector:(id)arg1 didEncounterError:(id)arg2 ;
-(NSString *)description;
-(unsigned long long)maximumNumberOfItems;
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(void)setProperties:(NSFileProviderEnumerationProperties *)arg1 ;
-(NSFileProviderEnumerationProperties *)properties;
@end
