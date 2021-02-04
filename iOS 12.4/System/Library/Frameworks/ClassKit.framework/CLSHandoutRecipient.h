/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSHandoutRecipient : CLSObject <CLSRelationable> {

	NSString* _classID;
	NSString* _personID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * classID;                         //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy) NSString * personID;                        //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * parentObjectID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(BOOL)validateObject:(id*)arg1 ;
-(NSString *)classID;
-(id)initWithClassID:(id)arg1 personID:(id)arg2 ;
-(void)setClassID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(id)_init;
@end
