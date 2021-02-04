/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VUIJSMediaEntityTypeExport <JSExport>
@property (nonatomic,readonly) NSString * subtype; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * collectionType; 
@required
+(id)episode;
+(id)season;
+(id)movie;
+(id)show;
+(id)homeVideo;
+(id)rental;
-(NSString *)collectionType;
-(NSString *)subtype;
-(NSString *)category;

@end
