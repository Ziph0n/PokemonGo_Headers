/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRSequenceNumber : NSObject {

	int _value;
	NSString* _path;

}

@property (nonatomic,retain) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int value;                    //@synthesize value=_value - In the implementation block
-(id)initWithDirectoryTree:(id)arg1 andRelativePath:(id)arg2 ;
-(int)incrementValue;
-(void)save;
-(NSString *)path;
-(int)value;
-(void)setValue:(int)arg1 ;
-(void)setPath:(NSString *)arg1 ;
@end

