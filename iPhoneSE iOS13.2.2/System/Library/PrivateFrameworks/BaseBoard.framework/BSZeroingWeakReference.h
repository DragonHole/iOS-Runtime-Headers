/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(Class)objectClass;
-(void)setObjectAddress:(unsigned long long)arg1 ;
-(unsigned long long)objectAddress;
-(void)setObjectClass:(Class)arg1 ;
@end

