/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, QLItem;

@interface QLCacheItem : NSObject {

	NSMutableArray* _handlers;
	QLItem* _item;

}

@property (nonatomic,retain) QLItem * item;              //@synthesize item=_item - In the implementation block
-(void)_performHandlers;
-(void)setItem:(QLItem *)arg1 ;
-(QLItem *)item;
-(void)invalidate;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
@end

