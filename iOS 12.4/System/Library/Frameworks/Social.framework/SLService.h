/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLService : NSObject
+(id)serviceForServiceType:(id)arg1 ;
+(id)allServices;
-(id)serviceType;
-(void)addExtraParameters:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isFirstClassService;
-(long long)maximumURLCount;
-(long long)maximumImageCount;
-(long long)maximumImageDataSize;
-(long long)maximumVideoCount;
-(long long)maximumVideoDataSize;
-(long long)maximumVideoTimeLimit;
-(BOOL)supportsImageURL:(id)arg1 ;
-(BOOL)supportsVideoURL:(id)arg1 ;
-(BOOL)hasAccounts;
-(id)composeViewController;
-(id)accountType;
-(id)activityTitle;
-(id)activityImage;
@end
