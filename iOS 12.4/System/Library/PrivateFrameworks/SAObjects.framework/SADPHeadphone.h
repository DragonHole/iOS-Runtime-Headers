/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADPDeviceDetail.h>

@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (assign,nonatomic) BOOL inOrOverEar; 
@property (nonatomic,copy) NSString * position; 
+(id)headphone;
+(id)headphoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)inOrOverEar;
-(void)setInOrOverEar:(BOOL)arg1 ;
-(id)groupIdentifier;
-(void)setPosition:(NSString *)arg1 ;
-(NSString *)position;
@end

