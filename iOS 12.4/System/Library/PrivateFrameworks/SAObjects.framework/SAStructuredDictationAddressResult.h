/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL, NSData;

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * addressLabel; 
@property (nonatomic,copy) NSURL * contactId; 
@property (nonatomic,copy) NSString * contactName; 
@property (nonatomic,copy) NSData * forwardGeoProtobuf; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)structuredDictationAddressResult;
+(id)structuredDictationAddressResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)contactName;
-(id)encodedClassName;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(NSURL *)contactId;
-(void)setContactId:(NSURL *)arg1 ;
-(NSData *)forwardGeoProtobuf;
-(void)setForwardGeoProtobuf:(NSData *)arg1 ;
-(id)groupIdentifier;
-(void)setContactName:(NSString *)arg1 ;
@end
