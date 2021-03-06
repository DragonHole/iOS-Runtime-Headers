/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	unsigned long long _revision;
	NSString* _language;
	NSDictionary* _options;

}

@property (readonly) long long type; 
@property (copy,readonly) NSString * language; 
@property (readonly) unsigned long long revision; 
+(id)defaultModelConfigurationForType:(long long)arg1 ;
+(id)defaultModelConfigurationForType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
+(unsigned long long)currentRevisionForType:(long long)arg1 ;
+(id)supportedRevisionsForType:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)revision;
-(id)initWithModelType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)options;
-(NSString *)language;
@end

