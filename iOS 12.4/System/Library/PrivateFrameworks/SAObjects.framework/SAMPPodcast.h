/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPPodcast : SAMPMediaItem

@property (nonatomic,copy) NSString * seriesId; 
@property (nonatomic,copy) NSString * seriesTitle; 
+(id)podcastWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)podcast;
-(id)encodedClassName;
-(NSString *)seriesId;
-(void)setSeriesId:(NSString *)arg1 ;
-(NSString *)seriesTitle;
-(void)setSeriesTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
@end
