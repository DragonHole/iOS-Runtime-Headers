/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRecentDisplayItemsPersistenceDelegate;
@class NSArray, NSOrderedSet;

@interface SBRecentDisplayItemsDataStore : NSObject {

	NSArray* _recentLayouts;
	id<SBRecentDisplayItemsPersistenceDelegate> _persistenceDelegate;
	BOOL _shouldFallbackToRecentAppLayouts;

}

@property (nonatomic,copy) NSOrderedSet * displayItems; 
@property (assign,nonatomic,__weak) id<SBRecentDisplayItemsPersistenceDelegate> persistenceDelegate;              //@synthesize persistenceDelegate=_persistenceDelegate - In the implementation block
-(id)init;
-(NSOrderedSet *)displayItems;
-(void)setDisplayItems:(NSOrderedSet *)arg1 ;
-(id<SBRecentDisplayItemsPersistenceDelegate>)persistenceDelegate;
-(void)setPersistenceDelegate:(id<SBRecentDisplayItemsPersistenceDelegate>)arg1 ;
-(id)initWithRecentLayouts:(id)arg1 fallbackToRecentAppLayouts:(BOOL)arg2 ;
-(id)_displayItemsFromRecentAppLayouts:(id)arg1 ;
@end

