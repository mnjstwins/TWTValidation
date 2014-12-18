//
//  TWTJSONSchemaParser.h
//  TWTValidation
//
//  Created by Jill Cohen on 12/16/14.
//  Copyright (c) 2014 Two Toasters, LLC.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <Foundation/Foundation.h>


// Constants to find information in error's userInfo
extern NSString *const kTWTJSONErrorInfoSelectorKey; // Which parser threw the exception
extern NSString *const kTWTJSONErrorInfoPathKey; // Where the schema failed, given by the path of keywords
extern NSString *const kTWTJSONErrorInfoInvalidObjectKey; // Which object caused the failure

@class TWTJSONSchemaTopLevelASTNode;


@interface TWTJSONSchemaParser : NSObject

- (instancetype)initWithJSONSchema:(NSDictionary *)topLevelSchema;

- (TWTJSONSchemaTopLevelASTNode *)parseWithError:(NSError **)errorPointer;

@end
