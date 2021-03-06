/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class SASyncAnchor, NSString, NSArray;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SASyncAnchor * current; 
@property (assign,nonatomic) long long errorCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)chunkDenied;
+(id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)chunkDeniedWithErrorCode:(long long)arg1 ;
-(id)groupIdentifier;
-(SASyncAnchor *)current;
-(void)setCurrent:(SASyncAnchor *)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(id)initWithErrorCode:(long long)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

