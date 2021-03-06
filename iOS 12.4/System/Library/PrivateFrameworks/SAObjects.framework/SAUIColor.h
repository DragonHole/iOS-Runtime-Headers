/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUIColor : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * alpha; 
@property (assign,nonatomic) long long blueValue; 
@property (assign,nonatomic) long long greenValue; 
@property (assign,nonatomic) long long redValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)colorWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)color;
-(id)encodedClassName;
-(long long)blueValue;
-(void)setBlueValue:(long long)arg1 ;
-(long long)greenValue;
-(void)setGreenValue:(long long)arg1 ;
-(long long)redValue;
-(void)setRedValue:(long long)arg1 ;
-(id)groupIdentifier;
-(void)setAlpha:(NSNumber *)arg1 ;
-(NSNumber *)alpha;
@end

