/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKContentRating : NSObject {

	unsigned long long _contentRatingSystem;
	NSString* _displayName;
	unsigned long long _ratingValue;

}

@property (nonatomic,readonly) unsigned long long contentRatingSystem;              //@synthesize contentRatingSystem=_contentRatingSystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long ratingValue;                      //@synthesize ratingValue=_ratingValue - In the implementation block
+(unsigned long long)_ratingSystemForString:(id)arg1 ;
+(Class)_classForContentRatingSystem:(unsigned long long)arg1 ;
-(unsigned long long)ratingValue;
-(unsigned long long)contentRatingSystem;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
@end

