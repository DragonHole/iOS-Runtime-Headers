/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMBLocalZoneID.h>

@class NSString, NSData, NSArray;

@interface HMBLocalZoneIDRow : HMFObject <NSCopying, NSSecureCoding, HMBLocalZoneID> {

	NSString* _name;
	NSData* _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * labels; 
@property (nonatomic,readonly) NSData * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)labels;
-(id)attributeDescriptions;
-(id)initWithName:(id)arg1 token:(id)arg2 ;
@end

