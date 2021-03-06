/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate, NSDictionary, FCColorGradient, NSString;

@interface FCTopStoriesOperationResult : NSObject {

	NSArray* _mandatoryHeadlines;
	NSArray* _optionalHeadlines;
	NSDate* _publishDate;
	NSDictionary* _topStoriesMetadataByArticleID;
	FCColorGradient* _backgroundColorGradient;
	NSString* _subtitle;

}

@property (copy) NSArray * mandatoryHeadlines;                                     //@synthesize mandatoryHeadlines=_mandatoryHeadlines - In the implementation block
@property (copy) NSArray * optionalHeadlines;                                      //@synthesize optionalHeadlines=_optionalHeadlines - In the implementation block
@property (copy) NSDictionary * topStoriesMetadataByArticleID;                     //@synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID - In the implementation block
@property (copy) NSDate * publishDate;                                             //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) FCColorGradient * backgroundColorGradient;              //@synthesize backgroundColorGradient=_backgroundColorGradient - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSDate *)publishDate;
-(FCColorGradient *)backgroundColorGradient;
-(NSDictionary *)topStoriesMetadataByArticleID;
-(void)setTopStoriesMetadataByArticleID:(NSDictionary *)arg1 ;
-(void)setBackgroundColorGradient:(FCColorGradient *)arg1 ;
-(NSArray *)mandatoryHeadlines;
-(NSArray *)optionalHeadlines;
-(id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlines:(id)arg2 optionalHeadlines:(id)arg3 topStoriesMetadataByArticleID:(id)arg4 publishDate:(id)arg5 subtitle:(id)arg6 ;
-(void)setMandatoryHeadlines:(NSArray *)arg1 ;
-(void)setOptionalHeadlines:(NSArray *)arg1 ;
-(NSString *)subtitle;
@end

