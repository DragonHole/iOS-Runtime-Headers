/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FCCKOrderFeedResponse : NSObject {

	BOOL _reachedEnd;
	BOOL _reachedMinOrder;
	BOOL _wasDropped;
	NSString* _feedID;
	NSArray* _feedItemAndArticleRecords;
	unsigned long long _extent;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItemAndArticleRecords;              //@synthesize feedItemAndArticleRecords=_feedItemAndArticleRecords - In the implementation block
@property (assign,nonatomic) BOOL reachedEnd;                                //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (assign,nonatomic) BOOL reachedMinOrder;                           //@synthesize reachedMinOrder=_reachedMinOrder - In the implementation block
@property (assign,nonatomic) unsigned long long extent;                      //@synthesize extent=_extent - In the implementation block
@property (assign,nonatomic) BOOL wasDropped;                                //@synthesize wasDropped=_wasDropped - In the implementation block
-(NSString *)feedID;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setWasDropped:(BOOL)arg1 ;
-(BOOL)wasDropped;
-(void)setFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(NSArray *)feedItemAndArticleRecords;
-(void)setReachedMinOrder:(BOOL)arg1 ;
-(BOOL)reachedMinOrder;
-(BOOL)reachedEnd;
-(void)setReachedEnd:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)extent;
-(void)setExtent:(unsigned long long)arg1 ;
@end

