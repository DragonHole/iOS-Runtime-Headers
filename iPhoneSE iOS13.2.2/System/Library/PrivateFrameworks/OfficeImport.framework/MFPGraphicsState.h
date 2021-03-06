/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface MFPGraphicsState : NSObject {

	CGAffineTransform mPageTransform;
	CGAffineTransform mWorldTransform;

}
-(void)removeTransform:(CGAffineTransform)arg1 ;
-(id)initWithDefaults;
-(CGAffineTransform)worldTransform;
-(void)setWorldTransform:(CGAffineTransform)arg1 ;
-(void)multiplyWorldTransformBy:(CGAffineTransform)arg1 order:(int)arg2 ;
-(void)setPageTransform:(CGAffineTransform)arg1 ;
-(id)initWithGraphicsState:(id)arg1 ;
-(CGAffineTransform)pageTransform;
@end

