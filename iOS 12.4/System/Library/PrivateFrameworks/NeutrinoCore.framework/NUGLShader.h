/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject {

	long long _compilationStatus;
	NSError* _compilationError;
	long long _type;
	NSString* _source;

}

@property (readonly) unsigned glType; 
@property (readonly) unsigned glStage; 
@property (readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (readonly) NSString * source;              //@synthesize source=_source - In the implementation block
-(void)delete;
-(id)initWithType:(long long)arg1 source:(id)arg2 ;
-(unsigned)glType;
-(unsigned)glStage;
-(void)generate:(id)arg1 ;
-(BOOL)compile:(id)arg1 error:(out id*)arg2 ;
-(void)_compile:(id)arg1 ;
-(id)init;
-(long long)type;
-(NSString *)source;
@end

