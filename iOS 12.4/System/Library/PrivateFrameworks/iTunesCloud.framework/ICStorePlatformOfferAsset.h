/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double previewDuration; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long size; 
-(double)previewDuration;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSURL *)previewURL;
-(long long)size;
-(double)duration;
@end

