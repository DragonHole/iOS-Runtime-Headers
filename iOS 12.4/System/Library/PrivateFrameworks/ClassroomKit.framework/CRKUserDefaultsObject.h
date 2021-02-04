/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKKeyObjectStoring;
@class NSString, NSObject;

@interface CRKUserDefaultsObject : NSObject {

	NSString* _key;
	NSObject*<CRKKeyObjectStoring> _store;

}

@property (nonatomic,readonly) NSObject*<CRKKeyObjectStoring> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (copy) id value; 
-(NSObject*<CRKKeyObjectStoring>)store;
-(id)initWithStore:(id)arg1 key:(id)arg2 ;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 ;
-(id)initWithKey:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)key;
@end
