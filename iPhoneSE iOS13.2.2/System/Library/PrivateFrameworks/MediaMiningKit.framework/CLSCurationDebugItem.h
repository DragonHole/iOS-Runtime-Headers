/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSCurationDebugObject.h>

@protocol CLSInvestigationItem;
@interface CLSCurationDebugItem : CLSCurationDebugObject {

	unsigned long long _dedupingType;
	CLSCurationDebugItem* _dedupedDebugItem;
	id<CLSInvestigationItem> _item;

}

@property (nonatomic,retain) id<CLSInvestigationItem> item;              //@synthesize item=_item - In the implementation block
+(id)stringForDedupingType:(unsigned long long)arg1 ;
-(id)identifier;
-(id<CLSInvestigationItem>)item;
-(void)setItem:(id<CLSInvestigationItem>)arg1 ;
-(id)dictionaryRepresentation;
-(id)timestamp;
-(id)initWithItem:(id)arg1 ;
-(void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2 ;
@end

