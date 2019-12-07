/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FCColor, FCColorGradient, NTPBDiscoverMoreVideosInfo, NSArray, NSDate, FCFeedEdition;


@protocol FCFeedGroupOutlining <NSObject,FCFeedElement>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) long long groupType; 
@property (nonatomic,copy,readonly) NSString * eyebrowText; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * ctaText; 
@property (nonatomic,copy,readonly) FCColor * titleColor; 
@property (nonatomic,copy,readonly) FCColor * darkStyleTitleColor; 
@property (nonatomic,copy,readonly) FCColorGradient * backgroundGradient; 
@property (nonatomic,copy,readonly) FCColorGradient * darkStyleBackgroundGradient; 
@property (nonatomic,copy,readonly) FCColorGradient * sauceGradient; 
@property (nonatomic,copy,readonly) FCColorGradient * darkStyleSauceGradient; 
@property (nonatomic,copy,readonly) FCColor * cardBackgroundColor; 
@property (nonatomic,copy,readonly) FCColor * darkStyleCardBackgroundColor; 
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (nonatomic,copy,readonly) NSArray * videoPlaylistHeadlines; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) FCFeedEdition * edition; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned long long mergeID; 
@property (nonatomic,copy,readonly) NSArray * headlines; 
@property (nonatomic,copy,readonly) NSString * backingTagID; 
@property (nonatomic,copy,readonly) NSArray * issueIDs; 
@property (nonatomic,readonly) id<FCForYouMagazineFeedGroup> magazineGroup; 
@required
-(unsigned long long)options;
-(NSString *)identifier;
-(NSString *)title;
-(NSDate *)creationDate;
-(NSString *)subtitle;
-(FCColor *)titleColor;
-(FCColorGradient *)backgroundGradient;
-(NSString *)sourceIdentifier;
-(FCFeedEdition *)edition;
-(long long)groupType;
-(NSString *)eyebrowText;
-(NSString *)ctaText;
-(FCColor *)darkStyleTitleColor;
-(FCColor *)cardBackgroundColor;
-(FCColor *)darkStyleCardBackgroundColor;
-(FCColorGradient *)sauceGradient;
-(FCColorGradient *)darkStyleSauceGradient;
-(FCColorGradient *)darkStyleBackgroundGradient;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(NSArray *)issueIDs;
-(unsigned long long)mergeID;
-(NSArray *)headlines;
-(NSArray *)videoPlaylistHeadlines;
-(NSString *)backingTagID;
-(id<FCForYouMagazineFeedGroup>)magazineGroup;

@end
