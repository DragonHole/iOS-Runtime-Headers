/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailCore/EmailCore-Structs.h>
@class NSSet, NSString;

@interface ECAuthScheme : NSObject

@property (nonatomic,copy,readonly) NSSet * supportedSASLMechanisms; 
@property (nonatomic,readonly) BOOL requiresUsername; 
@property (nonatomic,readonly) BOOL requiresPassword; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * humanReadableName; 
@property (nonatomic,readonly) unsigned applescriptScheme; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(id)schemeWithApplescriptScheme:(unsigned)arg1 ;
-(NSString *)name;
-(NSString *)humanReadableName;
-(BOOL)requiresPassword;
-(unsigned)applescriptScheme;
-(BOOL)requiresUsername;
-(NSSet *)supportedSASLMechanisms;
@end
