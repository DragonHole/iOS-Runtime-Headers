/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VUIJSMediaEntityTypeExport <JSExport>
@property (nonatomic,readonly) NSString * subtype; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * collectionType; 
@required
+(id)show;
+(id)movie;
+(id)season;
+(id)episode;
+(id)rental;
+(id)homeVideo;
-(NSString *)category;
-(NSString *)subtype;
-(NSString *)collectionType;

@end

