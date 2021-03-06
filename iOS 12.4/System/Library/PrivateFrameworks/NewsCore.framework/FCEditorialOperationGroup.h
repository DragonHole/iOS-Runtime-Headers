/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCSectionProviding;
@class NSArray, NSDate;

@interface FCEditorialOperationGroup : NSObject {

	id<FCSectionProviding> _section;
	NSArray* _headlines;
	NSDate* _publishDate;

}

@property (nonatomic,retain) id<FCSectionProviding> section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * headlines;                         //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) NSDate * publishDate;                        //@synthesize publishDate=_publishDate - In the implementation block
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSDate *)publishDate;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
-(id<FCSectionProviding>)section;
-(void)setSection:(id<FCSectionProviding>)arg1 ;
@end

