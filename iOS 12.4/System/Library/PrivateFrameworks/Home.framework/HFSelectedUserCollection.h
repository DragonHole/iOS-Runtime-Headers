/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSSet, NSString;

@interface HFSelectedUserCollection : NSObject <NAIdentifiable> {

	unsigned long long _type;
	NSSet* _specificUsers;

}

@property (nonatomic,readonly) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSSet * specificUsers;              //@synthesize specificUsers=_specificUsers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allUsersCollection;
+(id)currentUserCollection;
+(id)collectionWithSpecificUsers:(id)arg1 ;
+(id)collectionWithResolvedUsers:(id)arg1 inHome:(id)arg2 ;
+(id)na_identity;
-(id)resolveSelectedUsersWithHome:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 specificUsers:(id)arg2 ;
-(NSSet *)specificUsers;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
@end

