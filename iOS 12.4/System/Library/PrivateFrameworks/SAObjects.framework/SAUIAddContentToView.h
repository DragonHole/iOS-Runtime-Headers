/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * targetViewId; 
+(id)addContentToView;
+(id)addContentToViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
@end

