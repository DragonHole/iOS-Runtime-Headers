/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCDictionaryImageSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface BCInternalAuthenticationRequest : NSObject <BCDictionaryImageSerializable, NSSecureCoding> {

	NSString* _businessIdentifier;
	NSString* _groupIdentifier;
	NSString* _responseEncryptionKey;
	NSArray* _retrieve;
	NSDictionary* _labels;

}

@property (nonatomic,retain) NSString * businessIdentifier;                 //@synthesize businessIdentifier=_businessIdentifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                    //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * responseEncryptionKey;              //@synthesize responseEncryptionKey=_responseEncryptionKey - In the implementation block
@property (nonatomic,retain) NSArray * retrieve;                            //@synthesize retrieve=_retrieve - In the implementation block
@property (nonatomic,retain) NSDictionary * labels;                         //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSDictionary *)labels;
-(void)setLabels:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(NSString *)businessIdentifier;
-(void)setBusinessIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(void)setResponseEncryptionKey:(NSString *)arg1 ;
-(void)setRetrieve:(NSArray *)arg1 ;
-(NSString *)responseEncryptionKey;
-(NSArray *)retrieve;
@end

