/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeyDerivingOperation.h>

@class NSData, NSString;

@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation> {

	id _pbkdf2OperationInternal;

}

@property (nonatomic,copy) id<SFPseudoRandomFunction> pseudoRandomFunction; 
@property (assign,nonatomic) long long iterationCount; 
@property (nonatomic,copy) NSData * salt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_randomSalt;
+(long long)keySource;
+(BOOL)supportsSecureCoding;
-(NSData *)salt;
-(id<SFPseudoRandomFunction>)pseudoRandomFunction;
-(id)initWithPseudoRandomFunction:(id)arg1 iterationCount:(long long)arg2 salt:(id)arg3 ;
-(id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3 ;
-(void)setIterationCount:(long long)arg1 ;
-(void)setPseudoRandomFunction:(id<SFPseudoRandomFunction>)arg1 ;
-(void)setSalt:(NSData *)arg1 ;
-(long long)iterationCount;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
