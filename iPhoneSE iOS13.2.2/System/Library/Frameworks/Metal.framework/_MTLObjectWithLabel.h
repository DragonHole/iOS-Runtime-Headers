/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class NSString;

@interface _MTLObjectWithLabel : NSObject {

	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (copy) NSString * label; 
-(id)init;
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)retainedLabel;
@end
