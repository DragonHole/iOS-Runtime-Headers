/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseSection : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long sectionType; 
@property (nonatomic,copy) NSURL * loadAdditionalContentURL; 
@property (assign,nonatomic) long long uniformContentItemType; 
@property (assign,getter=isMemberOfChartSet,nonatomic) BOOL memberOfChartSet; 
@property (assign,getter=isBrick,nonatomic) BOOL brick; 
@property (nonatomic,retain) MPModelStoreBrowseResponse * previouslyRetrievedNestedResponse; 
+(id)__title_KEY;
+(id)__loadAdditionalContentURL_KEY;
+(id)__sectionType_KEY;
+(id)__uniformContentItemType_KEY;
+(id)__memberOfChartSet_KEY;
+(id)__brick_KEY;
+(id)__previouslyRetrievedNestedResponse_KEY;
@end

