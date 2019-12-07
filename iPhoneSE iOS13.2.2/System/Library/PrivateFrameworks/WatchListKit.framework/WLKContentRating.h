/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKContentRating : NSObject {

	NSString* _displayName;
	unsigned long long _ratingValue;
	NSString* _contentRatingSystem;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long ratingValue;                   //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentRatingSystem;              //@synthesize contentRatingSystem=_contentRatingSystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
-(id)init;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
-(unsigned long long)ratingValue;
-(NSString *)contentRatingSystem;
@end
