/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSZeroingWeakReference : NSObject {

	id _object;
	Class _objectClass;
	unsigned long long _objectAddress;

}

@property (assign,nonatomic) Class objectClass;                             //@synthesize objectClass=_objectClass - In the implementation block
@property (assign,nonatomic) unsigned long long objectAddress;              //@synthesize objectAddress=_objectAddress - In the implementation block
@property (nonatomic,__weak,readonly) id object; 
+(id)referenceWithObject:(id)arg1 ;
-(unsigned long long)objectAddress;
-(void)setObjectAddress:(unsigned long long)arg1 ;
-(void)setObjectClass:(Class)arg1 ;
-(Class)objectClass;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
@end

