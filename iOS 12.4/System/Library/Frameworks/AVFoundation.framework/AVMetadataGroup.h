/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSArray;

@interface AVMetadataGroup : NSObject

@property (nonatomic,readonly) NSString * classifyingLabel; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(void)initialize;
-(NSString *)classifyingLabel;
-(opaqueCMFormatDescriptionRef)copyFormatDescription;
-(NSString *)uniqueID;
-(NSArray *)items;
@end
