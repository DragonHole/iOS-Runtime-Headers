/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SKUIItemContentRating : NSObject {

	NSArray* _contentRatingAdvisories;
	NSString* _contentRatingName;
	NSString* _contentRatingSystemName;
	NSString* _contentRank;

}

@property (nonatomic,readonly) NSArray * contentRatingAdvisories;               //@synthesize contentRatingAdvisories=_contentRatingAdvisories - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingName;                    //@synthesize contentRatingName=_contentRatingName - In the implementation block
@property (nonatomic,readonly) NSString * contentRank;                          //@synthesize contentRank=_contentRank - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingSystemName;              //@synthesize contentRatingSystemName=_contentRatingSystemName - In the implementation block
-(NSString *)contentRatingSystemName;
-(NSString *)contentRank;
-(NSString *)contentRatingName;
-(NSArray *)contentRatingAdvisories;
-(id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2 ;
-(id)description;
@end

