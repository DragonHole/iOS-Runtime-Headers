/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKBundleResourceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _extension;

}

@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * extension;              //@synthesize extension=_extension - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withName:(id)arg1 extension:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extension;
-(id)initWithName:(id)arg1 extension:(id)arg2 ;
-(BOOL)isEqualToBundleResourceDescriptor:(id)arg1 ;
@end

