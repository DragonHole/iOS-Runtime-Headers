/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {

	int _identifier;
	NSString* canvasIdentifier;

}

@property (nonatomic,copy) NSString * canvasIdentifier; 
+(id)uniqueToken;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)canvasIdentifier;
-(void)setCanvasIdentifier:(NSString *)arg1 ;
@end
