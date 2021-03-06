/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class NSArray, NSString;

@interface CompassShader : NSObject {

	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _uniforms;
	NSArray* _uniformNames;
	NSString* _fragmentName;
	NSString* _vertexName;
	unsigned _program;

}

@property (assign,nonatomic) unsigned program;              //@synthesize program=_program - In the implementation block
-(unsigned)program;
-(void)setProgram:(unsigned)arg1 ;
-(int)locationForUniform:(id)arg1 ;
-(id)initWithFragmentName:(id)arg1 vertexName:(id)arg2 uniformNames:(id)arg3 ;
-(BOOL)loadShader;
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 file:(id)arg3 ;
-(BOOL)linkProgram:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 uniformNames:(id)arg2 ;
-(BOOL)validateProgram:(unsigned)arg1 ;
-(void)dealloc;
-(void)use;
@end

