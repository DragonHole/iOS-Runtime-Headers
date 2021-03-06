/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPPETFeedback : NSObject
+(id)_serialLoggingQueue;
+(void)_logUsedFeedbackForItems:(id)arg1 domain:(PPMPortraitDomain_)arg2 clientIdentifier:(id)arg3 ;
+(void)_logOverallEngagement:(id)arg1 domain:(PPMPortraitDomain_)arg2 clientIdentifier:(id)arg3 ;
+(void)_logEngagementFeedbackForItems:(id)arg1 domain:(PPMPortraitDomain_)arg2 clientIdentifier:(id)arg3 ;
+(void)portraitFeedbackUsedTopics:(id)arg1 clientIdentifier:(id)arg2 ;
+(void)portraitFeedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2 clientIdentifier:(id)arg3 ;
+(void)portraitFeedbackUsedNamedEntities:(id)arg1 clientIdentifier:(id)arg2 ;
+(void)portraitFeedbackEngagedTopics:(id)arg1 clientIdentifier:(id)arg2 ;
+(void)portraitFeedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2 clientIdentifier:(id)arg3 ;
+(void)portraitFeedbackEngagedNamedEntities:(id)arg1 clientIdentifier:(id)arg2 ;
+(void)portraitFeedbackTopicsOverallEngagement:(id)arg1 clientIdentifier:(id)arg2 ;
+(void)portraitFeedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2 clientIdentifier:(id)arg3 ;
+(void)portraitFeedbackNamedEntitiesOverallEngagement:(id)arg1 clientIdentifier:(id)arg2 ;
@end

