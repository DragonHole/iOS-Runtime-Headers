/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RUIScriptingStaticValue : NSObject {

	int _JSPropertyAttributes;
	const char* _identifier;
	/*function pointer*/void* _getter;
	/*function pointer*/void* _setter;

}

@property (assign,nonatomic) const char* identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* getter;              //@synthesize getter=_getter - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* setter;              //@synthesize setter=_setter - In the implementation block
@property (assign,nonatomic) int JSPropertyAttributes;                      //@synthesize JSPropertyAttributes=_JSPropertyAttributes - In the implementation block
-(/*function pointer*/void*)getter;
-(/*function pointer*/void*)setter;
-(void)setGetter:(/*function pointer*/void*)arg1 ;
-(void)setSetter:(/*function pointer*/void*)arg1 ;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
-(const char*)identifier;
-(id)description;
-(void)setIdentifier:(const char*)arg1 ;
@end

