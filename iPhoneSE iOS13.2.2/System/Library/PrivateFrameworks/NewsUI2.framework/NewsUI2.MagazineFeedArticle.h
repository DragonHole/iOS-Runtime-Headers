/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString;

@interface NewsUI2.MagazineFeedArticle : NSObject <FCHeadlineMetadata> {

	 articleID;
	 title;
	??? displayDate;
	 storyType;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSDate * displayDate; 
@property (readonly,nonatomic) NSString * storyType; 
-(id)init;
-(NSString *)title;
-(NSDate *)displayDate;
-(NSString *)storyType;
@end
