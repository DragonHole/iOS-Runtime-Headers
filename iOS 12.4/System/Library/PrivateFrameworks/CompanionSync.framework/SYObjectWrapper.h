/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYChange.h>

@protocol SYObject;
@class NSString;

@interface SYObjectWrapper : NSObject <SYChange> {

	long long _type;
	id<SYObject> _wrappedObject;

}

@property (nonatomic,readonly) id<SYObject> wrappedObject;               //@synthesize wrappedObject=_wrappedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
-(NSString *)objectIdentifier;
-(long long)changeType;
-(id<SYObject>)wrappedObject;
-(id)initWithSYObject:(id)arg1 type:(long long)arg2 ;
-(NSString *)sequencer;
-(NSString *)description;
@end

