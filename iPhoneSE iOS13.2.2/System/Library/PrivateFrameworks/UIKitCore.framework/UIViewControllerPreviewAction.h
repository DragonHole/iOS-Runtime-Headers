/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying> {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
