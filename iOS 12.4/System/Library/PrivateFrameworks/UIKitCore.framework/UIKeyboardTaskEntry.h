/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface UIKeyboardTaskEntry : NSObject <NSCopying> {

	/*^block*/id __task;
	NSArray* __creationStack;

}

@property (nonatomic,retain,readonly) NSArray * originatingStack;              //@synthesize _creationStack=__creationStack - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)originatingStack;
-(void)execute:(id)arg1 ;
-(id)initWithTask:(/*^block*/id)arg1 ;
@end

