/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSXPCEncoding <NSObject>
@required
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2;
-(void)encodeObject:(id)arg1 forKey:(id)arg2;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2;

@end
